static char tell(char ch) {

        if(ch >= 'a' && ch <= 'z')
            return 'L';
        else if(ch >= 'A' && ch <= 'Z')
            return 'U';
        else
            return 'I';

}