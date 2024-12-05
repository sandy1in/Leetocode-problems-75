class Solution:
    def canChange(self, start: str, target: str) -> bool:
        if start.replace("_","")!=target.replace("_",""):
            return False
        st=[(char,idx) for idx,char in enumerate(start) if char!='_']
        tar=[(char,idx) for idx,char in enumerate(target) if char!='_']
        for(st_char,st_idx),(tar_char,tar_idx) in zip(st,tar):
            if st_char=='L' and st_idx<tar_idx:
                return False
            if st_char=='R' and st_idx>tar_idx:
                return False
        
    
        return True
        