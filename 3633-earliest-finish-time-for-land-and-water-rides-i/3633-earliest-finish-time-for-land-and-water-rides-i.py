class Solution:
    def earliestFinishTime(self, landStartTime: List[int], landDuration: List[int], waterStartTime: List[int], waterDuration: List[int]) -> int:
        rett=5000
        for i in range(0,len(landStartTime)):
            l1=landStartTime[i]+landDuration[i]
            for j in range(0,len(waterStartTime)):
                start=max(l1,waterStartTime[j])
                temp=start+waterDuration[j]
                rett=min(temp,rett)
    
        for i in range(0,len(waterStartTime)):
            l1=waterStartTime[i]+waterDuration[i]
            for j in range(0,len(landStartTime)):
                start=max(l1,landStartTime[j])
                temp=start+landDuration[j]
                rett=min(temp,rett)
        return rett
