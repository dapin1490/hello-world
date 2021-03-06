# 파이썬 선택 정렬
# 리스트 선언 및 초기화
ar = [3, 4, 2, 6, 8, 2, 9, 0, 4, 8, 7, 5, 2, 4, 0]  # 원소 15개. len(ar) = 15
cnt = 0  # 총 비교 횟수를 저장

# 정렬 전 리스트 출력
print("정렬 전 리스트\n{}\n".format(ar))

# 선택 정렬 실행
for i in range(len(ar) - 1):  # i = 0부터 i = 13까지
    idx = i  # 현재 인덱스 저장 : 편의상 "키"라고 부름
    # 지금 키를 저장한 i번째 원소는 편의상 "값"이라고 부르겠음

    for j in range(i + 1, len(ar)):  # j = i부터 j = 14까지
        cnt += 1  # 비교 횟수 증가
        if ar[j] < ar[idx]:  # 만약 지금 원소가 키보다 작다면
            idx = j  # 현재 원소의 인덱스를 키로 업데이트

    ar[i], ar[idx] = ar[idx], ar[i]  # 키와 값을 서로 뒤바꿈

# 정렬 후 리스트 출력
print("정렬 후 리스트\n{}\n".format(ar))

# 총 비교 횟수 출력
print("총 비교 횟수 : {}".format(cnt))
