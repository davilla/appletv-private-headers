/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <__ZN3JSC6JSCell11getJSNumberEv.h> // Unknown library
#import "NSXMLParserDelegate.h"

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffAuthenticator : __ZN3JSC6JSCell11getJSNumberEv <NSXMLParserDelegate> {
@private
	BOOL _requestSucceded;	// 5 = 0x5
	BOOL _inIdentificationSection;	// 6 = 0x6
	BOOL _inStatusSection;	// 7 = 0x7
	NSMutableString *_currentProperty;	// 8 = 0x8
}
- (id)_URLRequest;	// 0x306f4d79
- (void)_failAuthenticationWithError:(id)error;	// 0x306f536d
- (void)_handleAuthenticateResponse:(id)response;	// 0x306f5161
- (void)_sendAuthenticationRequest;	// 0x306f52c1
- (void)dealloc;	// 0x306f4f55
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x306f4b99
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x306f4fa9
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x306f4b75
@end

