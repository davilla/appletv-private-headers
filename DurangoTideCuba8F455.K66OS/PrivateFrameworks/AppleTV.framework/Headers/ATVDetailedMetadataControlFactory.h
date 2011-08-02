/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"


@interface ATVDetailedMetadataControlFactory : NSObject <BRControlFactory> {
}
+ (id)factory;	// 0x30644f91
- (void)_populateActors:(id)actors forControl:(id)control;	// 0x30644b8d
- (void)_populateDirectors:(id)directors forControl:(id)control;	// 0x30644b01
- (void)_populateMovieDetails:(id)details forControl:(id)control isTrailer:(BOOL)trailer;	// 0x30644fc1
- (void)_populateProducers:(id)producers forControl:(id)control;	// 0x30644a75
- (id)_setupBaseDetailedMetadataControl:(id)control;	// 0x30644d41
- (id)_setupMusicDetailedMetadataControl:(id)control;	// 0x30644d05
- (void)_setupSpecificDetailedMetadataControl:(id)control forControl:(id)control2;	// 0x30644bf1
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x30644e49
@end

