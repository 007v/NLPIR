
// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LICENSE_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LICENSE_API functions as being imported from a DLL, wheras this DLL sees symbols

/*********************************************************************
*
*  Func Name  : IsValidLicense
*
*  Description: �ж���Ȩ�Ƿ�Ϸ���API
*
*  Parameters : const char * sFilename:��Ȩ�ļ�������Ҫ����·����Ĭ��Ϊ��ǰ·��
*							  sSysname:ϵͳ����
*						  sLicenseCode:��Ȩ�룬�����ƻ�����Ȩʱʹ�ã�һ��Ĭ��Ϊ��
*
*  Returns    : 1�� ϵͳ��Ȩ�Ϸ�; ����Ϊ�Ƿ�
*  Author     : Kevin Zhang
*  History    :
*              1.create 2017-7-20
*********************************************************************/
int IsValidLicense(const char *sFilename, const char *sSysname, const char *sLicenseCode=NULL);

