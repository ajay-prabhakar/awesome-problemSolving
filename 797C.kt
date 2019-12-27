import java.io.BufferedReader
import java.io.InputStreamReader
import java.lang.StringBuilder
import java.util.*

object MinimalString{

    fun findMinString(str: String): String{
        var a_ascii = 97
        var currentMin = 26
        val letters = IntArray(26)
        val s = LinkedList<Int>()
        val t = Stack<Int>()
        val u = StringBuilder()

        for (i in str){
            val intValue = i.toInt() - a_ascii
            letters[intValue]++
            s.add(intValue)
            currentMin = if (intValue < currentMin) intValue else currentMin
        }

        while (s.isNotEmpty()){
            val c = s.pop()
            letters[c]--
            if (c != currentMin){
                t.push(c)
            }else{
                while (t.isNotEmpty() && t.peek() <= c){
                    u.append((t.pop() + a_ascii).toChar())
                }
                u.append((c + a_ascii).toChar())
            }
            var minChanged = false
            if(letters[currentMin] == 0){
                for(i in currentMin + 1 until 26){
                    if(letters[i] != 0){
                        currentMin = i
                        minChanged = true
                        break
                    }
                }
            }
            if (minChanged){
                while (t.isNotEmpty() && t.peek() <= currentMin){
                    u.append((t.pop() + a_ascii).toChar())
                }
            }
        }
        while(t.isNotEmpty()) {
            u.append((t.pop() + a_ascii).toChar())
        }
        return u.toString()
    }
}

fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val s = br.readLine()
    println(MinimalString.findMinString(s))
}