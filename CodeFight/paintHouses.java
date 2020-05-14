// In San Francisco, there is a row of several beautiful houses called the Painted Ladies. Each of the Painted Ladies 
// can be painted with one of three colors: red, blue or green. The cost of painting each house with a certain color 
// is different. cost[i][0] for each i is the cost of painting house i red, cost[i][1] is the cost of painting it blue, 
// and cost[i][2] is the cost of painting it green.

// You want to paint all the houses in a way such that no two adjacent Painted Ladies have the same color. Find the minimum 
// cost to achieve this.

// Example

// For cost = [[1, 3, 4], [2, 3, 3], [3, 1, 4]], the output should be
// paintHouses(cost) = 5.

// You can paint the first Painted Lady red for a cost of 1, the second one green for a cost of 3, and the third one blue 
// for a cost of 1, for a total cost of 5.


int paintHouses(int[][] costs) {
    if(costs==null||costs.length==0){
        return 0;
    }
 
    for(int i=0;i<costs.length;i++){
    cost[i][0] += Math.min(costs[i-1][1],costs[i-1][2]);
    cost[i][1] += Math.min(costs[i-1][0],costs[i-1][2]);
    cost[i][2] += Math.min(costs[i-1][0],costs[i-1][1]);
    }
 
    int res = Math.min(costs[costs.length-1][0], costs[costs.length-1][1]);
    res = Math.min(res, costs[costs.length-1][2);
 
    return res;
}
