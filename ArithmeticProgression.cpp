def canMakeArithmeticProgression(arr: list[int]) -> bool:
    arr = sorted(arr)

    common_diff = arr[1] - arr[0]

    for i in range(1, len(arr)):
        if arr[i] - arr[i - 1] != common_diff:
            return False

    return True


print(canMakeArithmeticProgression([3,5,1,7,9]))
