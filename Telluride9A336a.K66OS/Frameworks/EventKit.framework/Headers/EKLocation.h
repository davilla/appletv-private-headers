/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class CLLocation, NSString, NSNumber;

@interface EKLocation : EKObject <NSCopying> {
}
@property(copy, nonatomic) NSString *addressBookEntityID;	// G=0x31389f51; S=0x31389f89; 
@property(copy, nonatomic) CLLocation *geoLocation;	// G=0x31389df9; S=0x31389f35; 
@property(readonly, assign, nonatomic) BOOL isStructured;	// G=0x313eab91; 
@property(copy, nonatomic) NSNumber *radius;	// G=0x31389fa5; S=0x31389fdd; 
@property(copy, nonatomic) NSString *title;	// G=0x31380bad; S=0x31389d0d; 
+ (id)locationWithTitle:(id)title;	// 0x31389bdd
- (id)init;	// 0x31389c3d
- (id)_persistentLocation;	// 0x31389eed
// declared property getter: - (id)addressBookEntityID;	// 0x31389f51
- (id)copyWithZone:(NSZone *)zone;	// 0x31389d29
- (id)description;	// 0x313eabd1
// declared property getter: - (id)geoLocation;	// 0x31389df9
// declared property getter: - (BOOL)isStructured;	// 0x313eab91
// declared property getter: - (id)radius;	// 0x31389fa5
// declared property setter: - (void)setAddressBookEntityID:(id)anId;	// 0x31389f89
// declared property setter: - (void)setGeoLocation:(id)location;	// 0x31389f35
// declared property setter: - (void)setRadius:(id)radius;	// 0x31389fdd
// declared property setter: - (void)setTitle:(id)title;	// 0x31389d0d
// declared property getter: - (id)title;	// 0x31380bad
- (void)updatePersistentObject;	// 0x3138eb79
@end

