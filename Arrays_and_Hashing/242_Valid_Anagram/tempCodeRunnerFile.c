       bool found = false;
        char character  s[i];
        for (int j = 0; j < length; j++ ){
            if (character == t[j]){
                for (int k = j; k < length - 1; k++){
                    if (t[length-1] != character){
                        return false;
                    }
                    t[k] = t[k+1];
                    length --;
                    found = true;
                }
            }
            if (found == false){
                return false;
            }
        }
    }
    return length == 0;
}