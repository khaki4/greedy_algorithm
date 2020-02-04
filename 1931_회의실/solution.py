def solve(_meetings):
    end_time = 0
    cnt = 0

    for j in range(len(_meetings)):
        meeting = _meetings[j]
        if end_time <= meeting[0]:
            end_time = meeting[1]
            cnt += 1

    return cnt


meetings = []
total_meeting_cnt = int(input())

for i in range(total_meeting_cnt):
    start, end = map(int, input().split())
    meetings.append([start, end])

meetings.sort(key=lambda x: (x[1], x[0]))

print(solve(meetings))
