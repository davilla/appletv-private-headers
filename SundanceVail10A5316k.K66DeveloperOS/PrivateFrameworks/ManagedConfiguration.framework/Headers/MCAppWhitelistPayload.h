/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray;

@interface MCAppWhitelistPayload : MCPayload {
@private
	NSArray *_whitelistedAppsAndOptions;	// 40 = 0x28
}
@property(retain, nonatomic) NSArray *whitelistedAppsAndOptions;	// G=0x305f434d; S=0x305f435d; @synthesize=_whitelistedAppsAndOptions
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x305f3b7d
+ (id)typeStrings;	// 0x305f3b55
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x305f3c05
- (void).cxx_destruct;	// 0x305f4385
- (id)description;	// 0x305f42b5
// declared property setter: - (void)setWhitelistedAppsAndOptions:(id)options;	// 0x305f435d
- (id)stubDictionary;	// 0x305f413d
- (id)subtitle1Description;	// 0x305f41ed
- (id)subtitle1Label;	// 0x305f41d9
// declared property getter: - (id)whitelistedAppsAndOptions;	// 0x305f434d
@end

