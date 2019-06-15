package StatusCode

class StatusCode(var code: Int, var message: String) {
    fun accepted() = this.code == 202

    fun ifAccepted(block: () -> Unit) {
        if (this.accepted()) {
            block()
        }
    }
}




