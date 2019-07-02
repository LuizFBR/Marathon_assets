int binary_search( vector<int> v , int lower_bound , int upper_bound , int target ){
    int sol = -1;

    while ( lower_bound <= upper_bound ) {
        int mid = (lower_bound + upper_bound)/2;
        if ( v[mid] == target ){
            sol = mid;
            while( sol - 1 >= 0 && v[sol - 1] == target )
                sol--;
            break;
        }
        else if ( v[mid] < target ){
            lower_bound = mid + 1;
        }
        else if ( v[mid] > target ){
            upper_bound = mid - 1;
        }
    }
    return sol;
}
