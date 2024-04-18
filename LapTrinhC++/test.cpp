void inChanLe(int mang[], int size)
{
    int demChan = 0, demLe = 0;
    cout << "so phan tu chan:";
    for (int i = 0; i < size; i++)
    {
        if (mang[i] % 2 == 0)
        {
            cout << mang[i] << " ";
            demChan++;
        }
    }
    cout << "\nsoluong chan: " << demChan << endl;

    cout << "so phan tu le:";
    for (int i = 0; i < size; i++)
    {
        if (mang[i] % 2 != 0)
        {
            cout << mang[i] << " ";
            demLe++;
        }
    }
    cout << "\nsoluong le: " << demLe << endl;
}
