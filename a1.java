package a;
 
import java.util.Map;  
import java.util.StringTokenizer;  
import java.util.Map.Entry; 
import java.util.ArrayList;  
import java.util.HashMap;  
import java.util.List;
    
public class a1  {  
public static void main(String arg[]){      
  
    String sentence="Word is case insensitive, i.e. “file”, “FILE” and “File” are considered the same word."; 
    Map<String,Integer> map=new HashMap<String,Integer>();  
    String turn_sentence= sentence.toLowerCase();
    StringTokenizer token=new StringTokenizer(turn_sentence); 
    while(token.hasMoreTokens()){  
        
        String word=token.nextToken(", :\"\".“”");  
        if(map.containsKey(word)){      
            int count=map.get(word);  
            map.put(word, count+1);     
        }  
        else  
            map.put(word, 1);          
    }  
    sort(map);                        
}  
public static void sort(Map<String,Integer> map)
{ 
List<Map.Entry<String, Integer>> infoIds = new ArrayList<Map.Entry<String, Integer>>(map.entrySet()); 
for (int i = 0; i < infoIds.size(); i++)
{ 
Entry<String, Integer> id = infoIds.get(i); 
if(id.getKey().length()>=4) 
{System.out.println(id.getKey()+":"+id.getValue());
}
        }  
}  
}
