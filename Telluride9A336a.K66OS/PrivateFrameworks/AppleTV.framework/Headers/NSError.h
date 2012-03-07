/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSError.h> // Unknown library


@interface NSError (BRError)
+ (id)errorWithBRError:(int)brerror;	// 0x33b4ea0d
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion;	// 0x33b4ebc1
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion userInfo:(id)info;	// 0x33b4ebed
- (void)postBRErrorNotificationFromObject:(id)object;	// 0x33b4ecf1
@end

@interface NSError (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x33bb3f55
@end

@interface NSError (ISAdditions)
- (id)errorBySettingFatalError:(BOOL)error;	// 0x33bc1285
- (BOOL)isEqual:(id)equal compareUserInfo:(BOOL)info;	// 0x33bc12bd
- (BOOL)isFatalError;	// 0x33bc1489
@end
