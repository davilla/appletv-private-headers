/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSURL.h> // Unknown library


@interface NSURL (BRURLAdditions)
+ (id)URLWithString:(id)string queryParameters:(id)parameters;	// 0x32aba195
+ (id)queryParametersFromDictionary:(id)dictionary;	// 0x32aba2e9
- (id)URLWithQueryParameter:(id)queryParameter value:(id)value;	// 0x32ab9f8d
- (id)_queryParameters;	// 0x32ab9d29
- (id)decodedQueryParameters;	// 0x32ab9e65
- (BOOL)isHTTPFamilyURL;	// 0x32ab9ce5
- (BOOL)isHTTPSURL;	// 0x32ab9ca5
- (BOOL)isHTTPURL;	// 0x32ab9c65
- (id)queryParameters;	// 0x32ab9e55
- (id)valueForParam:(id)param;	// 0x32aba205
@end

@interface NSURL (ISURLBagAdditions)
- (id)sanitizedURL;	// 0x32b6ea91
@end

@interface NSURL (ISAdditions)
+ (id)copyDictionaryForQueryString:(id)queryString unescapedValues:(BOOL)values;	// 0x32b740ad
+ (id)escapedStringForString:(id)string;	// 0x32b74215
+ (id)queryStringForDictionary:(id)dictionary escapedValues:(BOOL)values;	// 0x32b74255
+ (id)unescapedStringForString:(id)string;	// 0x32b74351
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)unescapedValues;	// 0x32b7439d
- (void)enumerateQueryWithBlock:(id)block;	// 0x32b74b05
- (BOOL)isSafeExternalURL;	// 0x32b746d9
- (id)schemeSwizzledURL;	// 0x32b74881
- (id)urlByReplacingSchemeWithScheme:(id)scheme;	// 0x32b74a79
- (id)urlBySettingQueryStringDictionary:(id)dictionary;	// 0x32b743d9
@end

@interface NSURL (AOSURLAdditions)
@end
