/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSMutableDictionary, NSDictionary;

@interface MCRestrictionsPayload : MCPayload {
	NSMutableDictionary *_restrictions;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSDictionary *restrictions;	// G=0x33678069; @synthesize=_restrictions
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x33675e4d
+ (id)typeStrings;	// 0x33675e25
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33675f5d
- (void).cxx_destruct;	// 0x33678079
- (id)_defaultMediaSettings;	// 0x33677191
- (id)_enforcedFeatureStrings;	// 0x33677019
- (void)_insertRestrictedBoolForKey:(id)key value:(id)value preferenc:(BOOL)preferenc;	// 0x33677b8d
- (id)_invalidFieldErrorWithFieldName:(id)fieldName;	// 0x33675ed5
- (id)_restrictedFeatureStrings;	// 0x33676991
- (id)description;	// 0x336768f9
- (id)installationWarnings;	// 0x33677c99
// declared property getter: - (id)restrictions;	// 0x33678069
- (id)stubDictionary;	// 0x33676645
- (id)subtitle1Description;	// 0x336773d5
@end
