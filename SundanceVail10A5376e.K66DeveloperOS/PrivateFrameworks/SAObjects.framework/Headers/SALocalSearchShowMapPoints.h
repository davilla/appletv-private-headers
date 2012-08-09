/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SALocalSearchMapItem, NSString, NSNumber, NSURL;

@interface SALocalSearchShowMapPoints : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *directionsType;	// G=0x3424a73d; S=0x3424a759; 
@property(retain, nonatomic) SALocalSearchMapItem *itemDestination;	// G=0x3424a7a9; S=0x3424a7fd; 
@property(retain, nonatomic) SALocalSearchMapItem *itemSource;	// G=0x3424a839; S=0x3424a88d; 
@property(copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;	// G=0x3424a8c9; S=0x3424a8e5; 
@property(assign, nonatomic) BOOL showDirections;	// G=0x3424a935; S=0x3424a9ad; 
@property(assign, nonatomic) BOOL showTraffic;	// G=0x3424a9f1; S=0x3424aa69; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3424a661; S=0x3424a6dd; 
+ (id)showMapPoints;	// 0x3424a5d1
+ (id)showMapPointsWithDictionary:(id)dictionary context:(id)context;	// 0x3424a615
// declared property getter: - (id)directionsType;	// 0x3424a73d
- (id)encodedClassName;	// 0x3424a5c5
- (id)groupIdentifier;	// 0x3424a5b5
// declared property getter: - (id)itemDestination;	// 0x3424a7a9
// declared property getter: - (id)itemSource;	// 0x3424a839
// declared property getter: - (id)regionOfInterestRadiusInMiles;	// 0x3424a8c9
- (BOOL)requiresResponse;	// 0x3424aaad
// declared property setter: - (void)setDirectionsType:(id)type;	// 0x3424a759
// declared property setter: - (void)setItemDestination:(id)destination;	// 0x3424a7fd
// declared property setter: - (void)setItemSource:(id)source;	// 0x3424a88d
// declared property setter: - (void)setRegionOfInterestRadiusInMiles:(id)miles;	// 0x3424a8e5
// declared property setter: - (void)setShowDirections:(BOOL)directions;	// 0x3424a9ad
// declared property setter: - (void)setShowTraffic:(BOOL)traffic;	// 0x3424aa69
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3424a6dd
// declared property getter: - (BOOL)showDirections;	// 0x3424a935
// declared property getter: - (BOOL)showTraffic;	// 0x3424a9f1
// declared property getter: - (id)targetAppId;	// 0x3424a661
@end
