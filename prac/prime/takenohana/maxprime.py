import gmpy2

# 奇数のみ判定することで判定数を半分にする．
# この時，2が判定されなくなってしまうので，予め2を素数の数に含める．
max_prime_index = 500000 + 1
prime_index = 1;
check_num = 3;
while(True):
    if gmpy2.is_prime(check_num):
        prime_index += 1
        if prime_index == max_prime_index :
            break
    check_num += 2

print(check_num)
