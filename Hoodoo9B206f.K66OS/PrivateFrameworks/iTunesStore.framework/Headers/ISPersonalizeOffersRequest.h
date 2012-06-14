/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSArray, NSNumber, NSMutableDictionary;

@interface ISPersonalizeOffersRequest : NSObject <NSCopying> {
@private
	NSNumber *_accountIdentifier;	// 4 = 0x4
	NSMutableDictionary *_itemIDsByType;	// 8 = 0x8
}
@property(retain, nonatomic) NSNumber *accountIdentifier;	// G=0x30121135; S=0x30121145; @synthesize=_accountIdentifier
@property(readonly, assign, nonatomic) NSArray *allItemTypes;	// G=0x30121041; 
- (id)initWithItems:(id)items;	// 0x30120de9
// declared property getter: - (id)accountIdentifier;	// 0x30121135
- (void)addItemIdentifier:(id)identifier forItemType:(id)itemType;	// 0x30120f4d
// declared property getter: - (id)allItemTypes;	// 0x30121041
- (id)copyWithZone:(NSZone *)zone;	// 0x30121099
- (void)dealloc;	// 0x30120eed
- (id)itemIdentifiersForItemType:(id)itemType;	// 0x30121061
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x30121145
@end
