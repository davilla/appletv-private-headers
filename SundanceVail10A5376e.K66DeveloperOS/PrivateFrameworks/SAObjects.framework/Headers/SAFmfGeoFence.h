/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SALocation, SAPersonAttribute, NSString;

@interface SAFmfGeoFence : SADomainObject {
}
@property(retain, nonatomic) SAPersonAttribute *friend;	// G=0x34251639; S=0x3425168d; 
@property(copy, nonatomic) NSString *geoFenceTrigger;	// G=0x342516c9; S=0x342516e5; 
@property(retain, nonatomic) SALocation *location;	// G=0x34251735; S=0x34251789; 
+ (id)geoFence;	// 0x342515a9
+ (id)geoFenceWithDictionary:(id)dictionary context:(id)context;	// 0x342515ed
- (id)encodedClassName;	// 0x3425159d
// declared property getter: - (id)friend;	// 0x34251639
// declared property getter: - (id)geoFenceTrigger;	// 0x342516c9
- (id)groupIdentifier;	// 0x3425158d
// declared property getter: - (id)location;	// 0x34251735
// declared property setter: - (void)setFriend:(id)aFriend;	// 0x3425168d
// declared property setter: - (void)setGeoFenceTrigger:(id)trigger;	// 0x342516e5
// declared property setter: - (void)setLocation:(id)location;	// 0x34251789
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x342517c5
@end

