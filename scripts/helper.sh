function convert_nums_to_words() { # macros don't take numbers :(
    # echo $1 | sed 's/0/zero/g' | sed 's/1/one/g' | sed 's/2/two/g' | sed 's/3/three/g' | sed 's/4/four/g' | sed 's/5/five/g' | sed 's/6/six/g' | sed 's/7/seven/g' | sed 's/8/eight/g' | sed 's/9/nine/g'
    echo $1 | sed 's/0/z/g' | sed 's/1/on/g' | sed 's/2/tw/g' | sed 's/3/th/g' | sed 's/4/fo/g' | sed 's/5/fi/g' | sed 's/6/six/g' | sed 's/7/sev/g' | sed 's/8/e/g' | sed 's/9/n/g'

}
