#include<bits/stdc++.h>
using namespace std;


struct job{
    string id;      // Job identifier (like "j1", "j2")
    int deadline;   // When the job needs to be completed by
    int profit;     // Profit earned from completing the job
};

bool cmp(job a,job b)
{
    return a.profit>b.profit; // Sort jobs by profit in descending order
}

pair<vector<string>,int> 

jobScheduling(vector<job> &jobs)
{
    // Step 1: Sort jobs by profit (highest to lowest)
    sort(jobs.begin(),jobs.end(),cmp);

    // Step 2: Find the maximum deadline to know array size needed
    int maxDeadline = 0;
    for(int i=0;i<jobs.size();i++)
        maxDeadline = max(maxDeadline,jobs[i].deadline);
    
    // Step 3: Create array to track time slots (initially empty)
    vector<string> slots(maxDeadline+1,"");
    
    // Step 4: Schedule jobs and track profit
    int totalProfit = 0;
    vector<string> scheduledJobs;
    
    // Step 5: Try to place each job in latest possible slot
    for(int i=0;i<jobs.size();i++)
    {
        for(int j=jobs[i].deadline;j>0;j--)
        {
            if(slots[j] == "")  // If slot is empty
            {
                slots[j] = jobs[i].id;  // Assign job to slot
                scheduledJobs.push_back(jobs[i].id);  // Record it
                totalProfit += jobs[i].profit;  // Add its profit
                break;  // Move to next job
            }
        }
    }
    return {scheduledJobs,totalProfit};
}

int main()
{
    // Create jobs with {id, deadline, profit}
    vector<job> jobs = {
        {"j1",2,100},  // Job 1: deadline=2, profit=100
        {"j2",1,19},   // Job 2: deadline=1, profit=19
        {"j3",2,27},   // Job 3: deadline=2, profit=27
        {"j4",1,25},   // Job 4: deadline=1, profit=25
        {"j5",3,15}    // Job 5: deadline=3, profit=15
    };

    // Schedule the jobs
    pair<vector<string>,int> result = jobScheduling(jobs);
    
    // Print results
    cout<<"Scheduled jobs: ";
    for(auto& id : result.first)
        cout<<id<<" ";
    cout<<"\nTotal Profit: "<<result.second<<endl;
}
