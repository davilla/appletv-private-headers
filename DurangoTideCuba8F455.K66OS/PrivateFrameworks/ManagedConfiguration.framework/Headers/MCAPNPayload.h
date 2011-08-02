/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray;

@interface MCAPNPayload : MCPayload {
	NSArray *_apnInfos;	// 40 = 0x28
	BOOL _wasInstalled;	// 44 = 0x2c
}
@property(assign, nonatomic) BOOL wasInstalled;	// G=0x340f45f5; S=0x340f4605; @synthesize=_wasInstalled
+ (id)apnDomainName;	// 0x340f45e9
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x340f57a1
+ (id)typeStrings;	// 0x340f49ed
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x340f54dd
- (BOOL)_checkForValidContents:(id)validContents outError:(id *)error;	// 0x340f4f8d
- (void)_finishInitializationWithContents:(id)contents;	// 0x340f4c4d
- (id)_strippedAPNDefaults;	// 0x340f4a15
- (id)_validationErrorType:(int)type forInvalidKey:(id)invalidKey;	// 0x340f4989
- (id)apnDefaults;	// 0x340f4b31
- (void)dealloc;	// 0x340f5495
- (id)description;	// 0x340f5339
// declared property setter: - (void)setWasInstalled:(BOOL)installed;	// 0x340f4605
- (id)stubDictionary;	// 0x340f5389
- (id)subtitle1Description;	// 0x340f52c5
- (id)subtitle1Label;	// 0x340f578d
- (id)subtitle2Description;	// 0x340f5251
- (id)subtitle2Label;	// 0x340f5779
// declared property getter: - (BOOL)wasInstalled;	// 0x340f45f5
@end

