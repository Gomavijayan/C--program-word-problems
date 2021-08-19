// Problem Statement
//There is a colony of 8 cells arranged in a straight line where each day every cell competes with its adjacent cells(neighbour). Each
//day, for each cell, if its neighbours are both active or both inactive, the cell becomes inactive the next day, otherwise it becomes
//active the next day.
//Assumptions: The two cells on the ends have single adjacent cell, so the other adjacent cell can be assumed to be always inactive.
//Even after updating the cell state. consider its previous state for updating the state of other cells. Update the cell information of all
//cells simultaneously. Write a function cellCompete which takes takes one 8 element array of integers cells representing the current
//state of 8 cells and one integer days representing the number of days to simulate. An integer value of 1 represents an active cell
//and value of 0 represents an inactive cell.

//Input Format
//Input will have 8 array values and the no of days


//Output Format
//print the array


//Constraints
//array size is 8 integers
 
 
 
 #include <stdio.h>
int main() {

    int days,ind,arr[8],outer;
    for(ind=0;ind<8;scanf("%d ",&arr[ind]),ind++);
    scanf("%d",&days);
    int dupArr[8];
    for(outer=0;outer<days;outer++){ 
        for(ind=0;ind<8;ind++){    
       
            if(ind==0){
                if(arr[ind+1]==0)
                    dupArr[ind]=0;
                else
                    dupArr[ind]=1;
            }
            else if(ind==7){
                if(arr[ind-1]==0)
                    dupArr[ind]=0;
                else
                    dupArr[ind]=1;
            }
            else{
                if((arr[ind-1]==0&&arr[ind+1]==0) || (arr[ind-1]==1&&arr[ind+1]==1))
                {
                    dupArr[ind]=0;
                }
                else  
                    dupArr[ind]=1;
            }
        }
        for(ind=0;ind<8;ind++){
            arr[ind]=dupArr[ind]; 
        }
    }
    for(ind=0;ind<8;ind++)
        printf("%d ",arr[ind]);//Displaying output
    return 0;
}
