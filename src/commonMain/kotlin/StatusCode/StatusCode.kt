package StatusCode

class StatusCode(var code: Int, var message: String) {
    fun accepted() = this.code == 202
}
