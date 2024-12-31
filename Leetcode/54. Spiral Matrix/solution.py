class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int n=matrix.size(),m=matrix[0].size(),i,c=0;
        int left_to_right_start_row=0,
        left_to_right_start_col=0,
        left_to_right_end_col=m,
        up_to_bottom_start_row=1,
        up_to_bottom_end_row=n,
        up_to_bottom_start_col=m-1,
        right_to_left_start_col=m-2,
        right_to_left_end_col=0,
        right_to_left_end_row=n-1,
        bottom_to_up_start_row=n-2,
        bottom_to_up_end_row=1,
        bottom_to_up_start_col=0;

        while(c<n*m){

            // left to right
            for(i=left_to_right_start_col;i<left_to_right_end_col;i++){
                v.push_back(matrix[left_to_right_start_row][i]);
                c++;
                if(c==n*m){
                    return v;
                }
            }
            left_to_right_start_row++;
            left_to_right_start_col++;
            left_to_right_end_col--;

            // up to down
            for(i=up_to_bottom_start_row;i<up_to_bottom_end_row;i++){
                v.push_back(matrix[i][up_to_bottom_start_col]);
                c++;
                if(c==n*m){
                    return v;
                }
            }
            up_to_bottom_start_row++;
            up_to_bottom_end_row--;
            up_to_bottom_start_col--;

            // right to left

            for(i=right_to_left_start_col;i>=right_to_left_end_col;i--){
                v.push_back(matrix[right_to_left_end_row][i]);
                c++;
                if(c==n*m){
                    return v;
                }
            }
            right_to_left_start_col--;
            right_to_left_end_col++;
            right_to_left_end_row--;

            // bottom to up

            for(i=bottom_to_up_start_row;i>=bottom_to_up_end_row;i--){
                v.push_back(matrix[i][bottom_to_up_start_col]);
                c++;
                if(c==n*m){
                    return v;
                }
            }
            bottom_to_up_start_row--;
            bottom_to_up_end_row++;
            bottom_to_up_start_col++;
        }
        return v;
    }
};
