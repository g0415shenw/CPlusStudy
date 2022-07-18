typedef void(__stdcall *pfDetailCbf)(const char *pData1, int length1, const char *pData2, int length2, const char *pData3, int length3);

extern "C"
{
  __declspec(dllexport) int __stdcall SetCallBack(pfDetailCbf callBack);

  __declspec(dllexport) int __stdcall GetData();
}

pfDetailCbf m_callback;
int SetCallBack(pfDetailCbf callBack)
{
  m_callback = callBack;
  return 0;
}

#include <string>
int GetData()
{
  std::string a1 = "中国";
  std::string a2 = "中国22";
  std::string a3 = "88888";
  m_callback(a1.c_str(), a1.length(), a2.c_str(), a2.length(), a3.c_str(), a3.length());
  return 0;
}