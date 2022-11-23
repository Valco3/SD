/*
 * Complete the 'equalStacks' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h1
 *  2. INTEGER_ARRAY h2
 *  3. INTEGER_ARRAY h3
 */

// int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
//     int maxHeight = 0;
//     int index1 = 0;
//     int index2 = 0;
//     int index3 = 0;
//     int sum1 = 0;
//     int sum2 = 0;
//     int sum3 = 0;
//     reverse(h1.begin(), h1.end());
//     reverse(h2.begin(), h2.end());
//     reverse(h3.begin(), h3.end());
//     while(index1 < h1.size() && index2 < h2.size() && index3 < h3.size()){
        
        
//         if(sum1 == sum2 && sum1 == sum3){
//             maxHeight = sum1;
//         }
//         if(sum1 < sum2 || sum1 < sum3){
//             sum1 += h1[index1]; index1++;
//             if(sum1 == sum2 && sum1 == sum3){
//                 maxHeight = sum1;
//             }
//             continue;
//         }
//         if(sum2 < sum1 || sum2 < sum3){
//             sum2 += h2[index2]; index2++;
//             if(sum1 == sum2 && sum1 == sum3){
//                 maxHeight = sum1;
//             }
//             continue;
//         }
//         if(sum3 < sum1 || sum3 < sum2){
//             sum3 += h3[index3]; index3++;
//             if(sum1 == sum2 && sum1 == sum3){
//                 maxHeight = sum1;
//             }
//             continue;
//         }
//         if(sum1 == sum2 && sum1 == sum3){
//             maxHeight = sum1;
//         }
//         sum1 += h1[index1]; index1++;
//         sum2 += h2[index2]; index2++;
//         sum3 += h3[index3]; index3++;
//         if(sum1 == sum2 && sum1 == sum3){
//             maxHeight = sum1;
//         }
//     }
//     return maxHeight;
    
// }