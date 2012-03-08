/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSError.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NetflixError : NSError {
}
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x305050bd
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x30505205
+ (id)errorWithDomain:(id)domain code:(int)code underlyingError:(id)error;	// 0x305051cd
+ (id)localizedDescriptionForNetflixError:(int)netflixError;	// 0x30505525
+ (id)localizedMessageForNRDPErrorCode:(int)nrdperrorCode;	// 0x30505bc1
+ (id)localizedMessageForNetflixInternalErrorCode:(int)netflixInternalErrorCode;	// 0x30505b51
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x30505241
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x3050539d
+ (id)netflixErrorWithCode:(int)code underlyingError:(id)error;	// 0x3050536d
+ (id)netflixInternalErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x305053f9
+ (id)netflixInternalErrorWithCode:(int)code underlyingError:(id)error;	// 0x305053cd
+ (id)nrdpErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x305054a5
+ (id)nrdpErrorWithCode:(int)code underlyingError:(id)error;	// 0x30505479
- (id)initWithDomain:(id)domain code:(int)code localizedDescription:(id)description extraUserInfo:(id)info underlyingError:(id)error;	// 0x30504ddd
@end
