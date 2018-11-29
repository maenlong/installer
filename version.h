#ifndef ISPP_INVOKED
/*
 * 你可以在这个头文件里定义你的项目的详细信息
 * Inno Setup 会自动读取此文件并使用其所需的相关信息
 */
#endif

#ifndef EX_VERSION_H
#define EX_VERSION_H

#ifndef _T
#if !defined(ISPP_INVOKED) && (defined(UNICODE) || defined(_UNICODE))
#define _T(text) L##text
#else
#define _T(text) text
#endif
#endif

#define EX_VERSION_MAJOR 1
#define EX_VERSION_MINOR 0
#define EX_VERSION_PATCH 0
#define EX_VERSION_BUILD 0
#ifndef ISPP_INVOKED
#define EX_VERSION_NUM          EX_VERSION_MAJOR,EX_VERSION_MINOR,EX_VERSION_PATCH,EX_VERSION_BUILD
#define EX_VERSION_STR          _T("1.0.0.0")
#endif

#define EX_APP_ID_32_STR        _T("{F0FCB797-DEEF-4207-97A4-D9384984CAB7}")
#define EX_APP_ID_64_STR        _T("{349D487E-F61C-4D2B-ABA6-A8CCBDB36F21}")
#define EX_APP_NAME_STR         _T("RongXin")
#define EX_APP_DISPLAY_NAME_STR _T("容信")
#define EX_APP_MUTEX_32_STR     EX_APP_ID_32_STR
#define EX_APP_MUTEX_64_STR     EX_APP_ID_64_STR
#define EX_COMPANY_NAME_STR     _T("yuntongxun")
#define EX_COMPANY_URL_STR      _T("http://www.yuntongxun.com/")
#define EX_SUPPORT_URL_STR      EX_COMPANY_URL_STR
#define EX_UPDATE_URL_STR       EX_COMPANY_URL_STR
#define EX_CONTACT_STR          EX_COMPANY_NAME_STR
#define EX_SUPPORT_PHONE_STR    _T("10010001000")
#define EX_README_URL_STR       _T("https://github.com/maenlong/installer/blob/master/README.md")
#define EX_LICENSE_URL_STR      _T("https://github.com/maenlong/installer/blob/master/LICENSE")
#define EX_COMMENTS_STR         _T("Comments")
#define EX_COPYRIGHT_STR        _T("Unlicense.")

#ifdef _WIN64
#define EX_APP_ID_STR           EX_APP_ID_64_STR
#define EX_APP_MUTEX_STR        EX_APP_MUTEX_64_STR
#else
#define EX_APP_ID_STR           EX_APP_ID_32_STR
#define EX_APP_MUTEX_STR        EX_APP_MUTEX_32_STR
#endif

#endif
