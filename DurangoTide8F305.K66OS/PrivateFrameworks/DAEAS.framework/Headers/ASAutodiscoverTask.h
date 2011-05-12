/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"
#import "DAEAS-Structs.h"

@class NSString, NSMutableDictionary, NSError;

@interface ASAutodiscoverTask : ASTask {
	NSString *_serverURL;	// 104 = 0x68
	NSString *_emailAddress;	// 108 = 0x6c
	NSString *_redirectEmail;	// 112 = 0x70
	NSMutableDictionary *_accountInfo;	// 116 = 0x74
	NSError *_discoveryError;	// 120 = 0x78
}
- (id)initWithURL:(id)url emailAddress:(id)address;	// 0x302f4985
- (id)_HTTPMethodForRequest:(id)request;	// 0x302f4871
- (id)_easVersion;	// 0x302f469d
- (void)_handleActionNode:(xmlNode *)node;	// 0x302f4b6d
- (void)_handleErrorNode:(xmlNode *)node;	// 0x302f4cc9
- (void)_handleServerNode:(xmlNode *)node;	// 0x302f4df9
- (void)_handleUserNode:(xmlNode *)node;	// 0x302f4c65
- (id)_policyKey;	// 0x302f46a1
- (void)_setAccountInfoFromAutoDiscoveryXML:(id)autoDiscoveryXML;	// 0x302f5059
- (BOOL)_shouldRedirectToHTTPForRequest:(id)request;	// 0x302f46b5
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x302f4835
- (id)_url;	// 0x302f48c5
- (id)contentType;	// 0x302f46a5
- (void)dealloc;	// 0x302f48f5
- (void)didProcessContext:(id)context;	// 0x302f46c9
- (BOOL)expectsWBXML;	// 0x302f46b1
- (void)finishWithError:(id)error;	// 0x302f49f5
- (id)localizedErrorStringForCertificateErrorCode:(int)certificateErrorCode host:(id)host;	// 0x302f471d
- (BOOL)processContext:(id)context;	// 0x302f46b9
- (id)requestBody;	// 0x302f47c9
- (BOOL)requiresEASVersionInformaton;	// 0x302f46c1
- (BOOL)shouldHandlePasswordErrors;	// 0x302f46bd
- (BOOL)shouldLogIncomingData;	// 0x302f46c5
- (double)timeoutInterval;	// 0x302f4691
@end

