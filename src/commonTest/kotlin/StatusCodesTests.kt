
//import StatusCode
import StatusCode.StatusCode
import StatusCode.StatusCodes
import kotlin.test.*

class StatusCodesTests()  {
    @Test fun `accepted returns false`() {
        assertFalse(StatusCodes().isAccepted(100))
        assertFalse(StatusCodes().isAccepted(200))
        assertFalse(StatusCodes().toStatusCode(100).accepted())
    }

    @Test fun `accepted returns true`() {
        assertTrue(StatusCodes().isAccepted(202))
        assertTrue(StatusCodes().toStatusCode(202).accepted())
    }

    @Test fun `ifAccpeted block executes`() {
        assertFails { StatusCodes().toStatusCode(202).ifAccepted { assertTrue(false) } }
        StatusCodes().toStatusCode(202).ifAccepted { assertTrue(true) }
    }

    @Test fun `ifAccepted block does not execute`() {
        StatusCodes().toStatusCode(100).ifAccepted { assertTrue(true) }
    }

    @Test fun `toStatusCode returns generic`() {
        assertEquals(StatusCodes().toStatusCode(399).message, "Your request was redirected")
        assertEquals(StatusCodes().toStatusCode(499).message, "A client error occurred")
        assertEquals(StatusCodes().toStatusCode(599).message, "A server error occurred")
        assertEquals(StatusCodes().toStatusCode(199).message, "An unknown error occurred")
    }

    @Test fun `errorOrNull returns null for successful responses`() {
        (200..299).forEach { assertNull(StatusCodes().errorOrNull(it)) }
    }

    @Test fun `errorOrNull returns correct informational responses`() {
        (100..199).forEach {
            when (it) {
                100  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Continue")
                101  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Switching Protocol")
                102  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Processing")
                103  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Early Hitns")
                else -> assertEquals(StatusCodes().errorOrNull(it)?.message,"An unknown error occurred")
            }
        }
    }

    @Test fun `errorOrNull returns correct redirect responses`() {
        (300..399).forEach {
            when (it) {
                300  -> assertEquals(StatusCodes().errorOrNull(it)?.message,"Multiple Choices")
                301  -> assertEquals(StatusCodes().errorOrNull(it)?.message,"Moved Permanently")
                302  -> assertEquals(StatusCodes().errorOrNull(it)?.message,"Found")
                303  -> assertEquals(StatusCodes().errorOrNull(it)?.message,"See Other")
                304  -> assertEquals(StatusCodes().errorOrNull(it)?.message,"Not Modified")
                307  -> assertEquals(StatusCodes().errorOrNull(it)?.message,"Temporary Redirect")
                308  -> assertEquals(StatusCodes().errorOrNull(it)?.message,"Permanent Redirect")
                else -> assertEquals(StatusCodes().errorOrNull(it)?.message,"Your request was redirected")
            }
        }
    }

    @Test fun `errorOrNull returns correct client error responses`() {
        (400..499).forEach {
            when (it) {
                400  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Bad Request")
                401  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Invalid Credentials")
                402  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Payment Required")
                403  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "FORBIDDEN: check your credentials")
                404  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Not Found")
                405  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Not Allowed")
                406  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Not Acceptable")
                407  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Proxy Authentication Required")
                408  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Request Timeout")
                409  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Conflict. Incorrect values supplied")
                410  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Gone")
                411  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Length Required")
                412  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Precondition Failed")
                413  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Payload Too Large")
                414  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "URI Too Long")
                415  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Unsupported Media Type")
                416  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Range Not Satisfiable")
                417  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Expectation Failed")
                418  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "I'm a teapot")
                422  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Unprocessable Entity")
                425  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Too Early")
                426  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Upgrade Required")
                428  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Precondition Required")
                429  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Too many requests")
                431  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Request Header Fields Too Large")
                451  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Unavailable For Legal Reasons")
                else -> assertEquals(StatusCodes().errorOrNull(it)?.message,"A client error occurred")
            }
        }
    }

    @Test fun `errorOrNull returns correct server error responses`() {
        (500..599).forEach {
            when (it) {
                500  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Internal Server Error")
                501  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Not Implemented")
                502  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Bad Gateway")
                503  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Service Unavailable")
                504  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Gateway Timeout")
                505  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "HTTP Version Not Supported")
                511  -> assertEquals(StatusCodes().errorOrNull(it)?.message, "Network Authentication Required")
                else -> assertEquals(StatusCodes().errorOrNull(it)?.message,"A server error occurred")
            }
        }
    }
}