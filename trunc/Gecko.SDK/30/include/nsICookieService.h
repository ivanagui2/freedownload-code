/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\nsICookieService.idl
 */

#ifndef __gen_nsICookieService_h__
#define __gen_nsICookieService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIPrompt; /* forward declaration */

class nsIChannel; /* forward declaration */


/* starting interface:    nsICookieService */
#define NS_ICOOKIESERVICE_IID_STR "2aaa897a-293c-4d2b-a657-8c9b7136996d"

#define NS_ICOOKIESERVICE_IID \
  {0x2aaa897a, 0x293c, 0x4d2b, \
    { 0xa6, 0x57, 0x8c, 0x9b, 0x71, 0x36, 0x99, 0x6d }}

class NS_NO_VTABLE nsICookieService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICOOKIESERVICE_IID)

  /* string getCookieString (in nsIURI aURI, in nsIChannel aChannel); */
  NS_IMETHOD GetCookieString(nsIURI *aURI, nsIChannel *aChannel, char * *_retval) = 0;

  /* string getCookieStringFromHttp (in nsIURI aURI, in nsIURI aFirstURI, in nsIChannel aChannel); */
  NS_IMETHOD GetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIChannel *aChannel, char * *_retval) = 0;

  /* void setCookieString (in nsIURI aURI, in nsIPrompt aPrompt, in string aCookie, in nsIChannel aChannel); */
  NS_IMETHOD SetCookieString(nsIURI *aURI, nsIPrompt *aPrompt, const char * aCookie, nsIChannel *aChannel) = 0;

  /* void setCookieStringFromHttp (in nsIURI aURI, in nsIURI aFirstURI, in nsIPrompt aPrompt, in string aCookie, in string aServerTime, in nsIChannel aChannel); */
  NS_IMETHOD SetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIPrompt *aPrompt, const char * aCookie, const char * aServerTime, nsIChannel *aChannel) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICookieService, NS_ICOOKIESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICOOKIESERVICE \
  NS_IMETHOD GetCookieString(nsIURI *aURI, nsIChannel *aChannel, char * *_retval); \
  NS_IMETHOD GetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIChannel *aChannel, char * *_retval); \
  NS_IMETHOD SetCookieString(nsIURI *aURI, nsIPrompt *aPrompt, const char * aCookie, nsIChannel *aChannel); \
  NS_IMETHOD SetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIPrompt *aPrompt, const char * aCookie, const char * aServerTime, nsIChannel *aChannel); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICOOKIESERVICE(_to) \
  NS_IMETHOD GetCookieString(nsIURI *aURI, nsIChannel *aChannel, char * *_retval) { return _to GetCookieString(aURI, aChannel, _retval); } \
  NS_IMETHOD GetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIChannel *aChannel, char * *_retval) { return _to GetCookieStringFromHttp(aURI, aFirstURI, aChannel, _retval); } \
  NS_IMETHOD SetCookieString(nsIURI *aURI, nsIPrompt *aPrompt, const char * aCookie, nsIChannel *aChannel) { return _to SetCookieString(aURI, aPrompt, aCookie, aChannel); } \
  NS_IMETHOD SetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIPrompt *aPrompt, const char * aCookie, const char * aServerTime, nsIChannel *aChannel) { return _to SetCookieStringFromHttp(aURI, aFirstURI, aPrompt, aCookie, aServerTime, aChannel); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICOOKIESERVICE(_to) \
  NS_IMETHOD GetCookieString(nsIURI *aURI, nsIChannel *aChannel, char * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCookieString(aURI, aChannel, _retval); } \
  NS_IMETHOD GetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIChannel *aChannel, char * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCookieStringFromHttp(aURI, aFirstURI, aChannel, _retval); } \
  NS_IMETHOD SetCookieString(nsIURI *aURI, nsIPrompt *aPrompt, const char * aCookie, nsIChannel *aChannel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCookieString(aURI, aPrompt, aCookie, aChannel); } \
  NS_IMETHOD SetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIPrompt *aPrompt, const char * aCookie, const char * aServerTime, nsIChannel *aChannel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCookieStringFromHttp(aURI, aFirstURI, aPrompt, aCookie, aServerTime, aChannel); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCookieService : public nsICookieService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICOOKIESERVICE

  nsCookieService();

private:
  ~nsCookieService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCookieService, nsICookieService)

nsCookieService::nsCookieService()
{
  /* member initializers and constructor code */
}

nsCookieService::~nsCookieService()
{
  /* destructor code */
}

/* string getCookieString (in nsIURI aURI, in nsIChannel aChannel); */
NS_IMETHODIMP nsCookieService::GetCookieString(nsIURI *aURI, nsIChannel *aChannel, char * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string getCookieStringFromHttp (in nsIURI aURI, in nsIURI aFirstURI, in nsIChannel aChannel); */
NS_IMETHODIMP nsCookieService::GetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIChannel *aChannel, char * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCookieString (in nsIURI aURI, in nsIPrompt aPrompt, in string aCookie, in nsIChannel aChannel); */
NS_IMETHODIMP nsCookieService::SetCookieString(nsIURI *aURI, nsIPrompt *aPrompt, const char * aCookie, nsIChannel *aChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCookieStringFromHttp (in nsIURI aURI, in nsIURI aFirstURI, in nsIPrompt aPrompt, in string aCookie, in string aServerTime, in nsIChannel aChannel); */
NS_IMETHODIMP nsCookieService::SetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIPrompt *aPrompt, const char * aCookie, const char * aServerTime, nsIChannel *aChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICookieService_h__ */
