public class StringRevese{

    public String reveseString(String str){
        if(str.isEmpty()){
            return str;
        }else{
            return reveseString(str.substring(1))+str.charAt(0);
        }  
    }
    public static void main(String[] args){
        StringRevese obj = new StringRevese();
        String result = obj.reveseString("HOLA AMIGOS");
        System.out.println(result);
    }

}