/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber;

@interface SSApplicationUserReview : NSObject {
@private
	NSString *_applicationPath;	// 4 = 0x4
	NSNumber *_itemIdentifier;	// 8 = 0x8
	float _userRating;	// 12 = 0xc
	NSNumber *_versionIdentifier;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *applicationPath;	// G=0x327240b9; @synthesize=_applicationPath
@property(assign, nonatomic) float userRating;	// G=0x32724099; S=0x327240a9; @synthesize=_userRating
@property(readonly, assign, nonatomic, getter=isValidReview) BOOL validReview;	// G=0x32724085; 
- (id)init;	// 0x327241c5
- (id)initForApplicationWithPath:(id)path;	// 0x32724249
- (void)_loadApplicationMetadata;	// 0x327240c9
// declared property getter: - (id)applicationPath;	// 0x327240b9
- (void)dealloc;	// 0x327241dd
// declared property getter: - (BOOL)isValidReview;	// 0x32724085
- (BOOL)scheduleReview;	// 0x327242a9
// declared property setter: - (void)setUserRating:(float)rating;	// 0x327240a9
// declared property getter: - (float)userRating;	// 0x32724099
@end

