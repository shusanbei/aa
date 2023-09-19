//二分的本质：边界，然后从边界一分为二，再继续细化
//当我们将区间[l, r]划分成[l, mid]和[mid + 1, r]时，其更新操作是r = mid或者l = mid + 1;，计算mid时不需要加1。
int bsearch_1(int l, int r)
{
    while (l < r)
    {
        int mid =(l + r) >> 1;
        if (check(mid)) r = mid;//check判断函数 判断mid是否满足
        else l = mid + 1;
    }
    return l;
}

//当我们将区间[l, r]划分成[l, mid - 1]和[mid, r]时，其更新操作是r = mid - 1或者l = mid;，此时为了防止死循环，计算mid时需要加1。
int bsearch_2(int l, int r)
{
    while (l < r)
    {
        int mid =(l + r + 1) >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    return l;
}