/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload {
	NSNumber *_isSimplePasscodeAllowed;	// 40 = 0x28
	NSNumber *_isPasscodeRequired;	// 44 = 0x2c
	NSNumber *_isAlphanumericPasscodeRequired;	// 48 = 0x30
	NSNumber *_isManualFetchingWhenRoaming;	// 52 = 0x34
	NSNumber *_minLength;	// 56 = 0x38
	NSNumber *_maxFailedAttempts;	// 60 = 0x3c
	NSNumber *_maxGracePeriodMinutes;	// 64 = 0x40
	NSNumber *_maxInactivityMinutes;	// 68 = 0x44
	NSNumber *_maxPasscodeAgeDays;	// 72 = 0x48
	NSNumber *_passcodeHistoryCount;	// 76 = 0x4c
	NSNumber *_minComplexCharacters;	// 80 = 0x50
}
@property(readonly, assign) NSNumber *isAlphanumericPasscodeRequired;	// G=0x318f4809; @synthesize=_isAlphanumericPasscodeRequired
@property(readonly, assign) NSNumber *isManualFetchingWhenRoaming;	// G=0x318f47f9; @synthesize=_isManualFetchingWhenRoaming
@property(readonly, assign) NSNumber *isPasscodeRequired;	// G=0x318f4819; @synthesize=_isPasscodeRequired
@property(readonly, assign) NSNumber *isSimplePasscodeAllowed;	// G=0x318f4829; @synthesize=_isSimplePasscodeAllowed
@property(readonly, assign) NSNumber *maxFailedAttempts;	// G=0x318f47d9; @synthesize=_maxFailedAttempts
@property(readonly, assign) NSNumber *maxGracePeriodMinutes;	// G=0x318f47c9; @synthesize=_maxGracePeriodMinutes
@property(readonly, assign) NSNumber *maxInactivityMinutes;	// G=0x318f47b9; @synthesize=_maxInactivityMinutes
@property(readonly, assign) NSNumber *maxPasscodeAgeDays;	// G=0x318f4799; @synthesize=_maxPasscodeAgeDays
@property(readonly, assign) NSNumber *minComplexCharacters;	// G=0x318f4789; @synthesize=_minComplexCharacters
@property(readonly, assign) NSNumber *minLength;	// G=0x318f47e9; @synthesize=_minLength
@property(readonly, assign) NSNumber *passcodeHistoryCount;	// G=0x318f47a9; @synthesize=_passcodeHistoryCount
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x318f499d
+ (id)typeStrings;	// 0x318f49fd
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x318f5191
- (void)dealloc;	// 0x318f4839
- (id)description;	// 0x318f4cfd
// declared property getter: - (id)isAlphanumericPasscodeRequired;	// 0x318f4809
// declared property getter: - (id)isManualFetchingWhenRoaming;	// 0x318f47f9
// declared property getter: - (id)isPasscodeRequired;	// 0x318f4819
// declared property getter: - (id)isSimplePasscodeAllowed;	// 0x318f4829
// declared property getter: - (id)maxFailedAttempts;	// 0x318f47d9
// declared property getter: - (id)maxGracePeriodMinutes;	// 0x318f47c9
// declared property getter: - (id)maxInactivityMinutes;	// 0x318f47b9
// declared property getter: - (id)maxPasscodeAgeDays;	// 0x318f4799
// declared property getter: - (id)minComplexCharacters;	// 0x318f4789
// declared property getter: - (id)minLength;	// 0x318f47e9
// declared property getter: - (id)passcodeHistoryCount;	// 0x318f47a9
- (id)stubDictionary;	// 0x318f4ff5
- (id)subtitle1Description;	// 0x318f4a25
- (id)title;	// 0x318f4ced
@end

