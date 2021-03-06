/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL;

@interface SAStockDelete : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *stocks;	// G=0x366287f5; S=0x36628871; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x36628719; S=0x36628795; 
+ (id)delete;	// 0x36628689
+ (id)deleteWithDictionary:(id)dictionary context:(id)context;	// 0x366286cd
- (id)encodedClassName;	// 0x3662867d
- (id)groupIdentifier;	// 0x3662866d
- (BOOL)requiresResponse;	// 0x366288d9
// declared property setter: - (void)setStocks:(id)stocks;	// 0x36628871
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x36628795
// declared property getter: - (id)stocks;	// 0x366287f5
// declared property getter: - (id)targetAppId;	// 0x36628719
@end

