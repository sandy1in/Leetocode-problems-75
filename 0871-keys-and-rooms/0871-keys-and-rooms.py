class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        n=len(rooms)
        visited=[False]*n
        st=[0]
        visited[0]=True
        c=1
        while st:
            temp=st.pop()
            for key in rooms[temp]:
                if not visited[key]:
                    st.append(key)
                    visited[key]=True
                    c+=1
        return c==n

        