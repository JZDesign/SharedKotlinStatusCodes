package StatusCode

class StatusCodes() {
    // to get an array of these values to loop over and share between clients we use the urnaryPlus()
    // to append each of them to values as this is compiled
    private val values = mutableSetOf<StatusCode>()
    private operator fun StatusCode.unaryPlus() = this.also { values += it }

    // Informational
    val continueResponse = +StatusCode(100, "Continue")
    val switchingProtocol = +StatusCode(101, "Switching Protocol")
    val processing = +StatusCode(102, "Processing")
    val earlyHints = +StatusCode(103, "Early Hitns")

    // Success
    val ok = +StatusCode(200, "Ok")
    val created = +StatusCode(201, "Created")
    val accepted = +StatusCode(202, "Accepted")
    val nonAuthoritativeInformation = +StatusCode(203, "Non-Authoritative Information")
    val noContent = +StatusCode(204, "No Content")
    val resetContent = +StatusCode(205, "Reset Content")
    val partialContent = +StatusCode(206, "Partial Content")
    val multiStatus = +StatusCode(207, "Multi-Status")
    val alreadyReported = +StatusCode(208, "Already Reported")
    val imUsed = +StatusCode(228, "IM Used")

    // Redirection
    val multipleChoices = +StatusCode(300, "Multiple Choices")
    val movedPermanently = +StatusCode(301, "Moved Permanently")
    val found = +StatusCode(302, "Found")
    val seeOther = +StatusCode(303, "See Other")
    val notModified = +StatusCode(304, "Not Modified")
    val temporaryRedirect = +StatusCode(307, "Temporary Redirect")
    val permanentRedirect = +StatusCode(308, "Permanent Redirect")

    // Client Errors
    val badRequest = +StatusCode(400, "Bad Request")
    val invalidCredentials = +StatusCode(401, "Invalid Credentials")
    val paymentRequired = +StatusCode(402, "Payment Required")
    val forbidden = +StatusCode(403, "FORBIDDEN: check your credentials")
    val notFound = +StatusCode(404, "Not Found")
    val notAllowed = +StatusCode(405, "Not Allowed")
    val notAcceptable = +StatusCode(406, "Not Acceptable")
    val proxyAuthRequired = +StatusCode(407, "Proxy Authentication Required")
    val requestTimeout = +StatusCode(408, "Request Timeout")
    val conflict = +StatusCode(409, "Conflict. Incorrect values supplied")
    val gone = +StatusCode(410, "Gone")
    val lengthRequired = +StatusCode(411, "Length Required")
    val preconditionFailed = +StatusCode(412, "Precondition Failed")
    val payloadTooLarge = +StatusCode(413, "Payload Too Large")
    val uriTooLong = +StatusCode(414, "URI Too Long")
    val unsupportedMediaType = +StatusCode(415, "Unsupported Media Type")
    val rangeNotSatisfiable = +StatusCode(416, "Range Not Satisfiable")
    val expectationFailed = +StatusCode(417, "Expectation Failed")
    val shortAndStout = +StatusCode(418, "I'm a teapot")
    val unprocessableEntity = +StatusCode(422, "Unprocessable Entity")
    val tooEarly = +StatusCode(425, "Too Early")
    val upgradeRequired = +StatusCode(426, "Upgrade Required")
    val preconditionRequired = +StatusCode(428, "Precondition Required")
    val tooManyRequests = +StatusCode(429, "Too many requests")
    val requestHeaderFieldsTooLarge = +StatusCode(431, "Request Header Fields Too Large")
    val unavailableForLegalReasons = +StatusCode(451, "Unavailable For Legal Reasons")

    // Server Errors
    val internalServerError = +StatusCode(500, "Internal Server Error")
    val notImplemented = +StatusCode(501, "Not Implemented")
    val badGateway = +StatusCode(502, "Bad Gateway")
    val unavailable = +StatusCode(503, "Service Unavailable")
    val timeout = +StatusCode(504, "Gateway Timeout")
    val httpVersionNotSupported = +StatusCode(505, "HTTP Version Not Supported")
    val networkAuthRequired = +StatusCode(511, "Network Authentication Required")

    fun toStatusCode(code: Int) = values.filter { it.code == code }.firstOrNull() ?: getGenericStatusCode(code)

    fun errorOrNull(code: Int): StatusCode? {
        if (code in 200..299) return null
        return toStatusCode(code)
    }

    fun isAccepted(code: Int) = (code == 202)

    fun getGenericStatusCode(code: Int) = when (code) {
        in 300..399 -> StatusCode(code, "Your request was redirected")
        in 400..499 -> StatusCode(code, "A client error occurred")
        in 500..599 -> StatusCode(code, "A server error occurred")
        else        -> StatusCode(code, "An unknown error occurred")
    }
}