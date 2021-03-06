/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIUserDictionaryWord.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface TIUbiquitousUserDictionaryWord : TIUserDictionaryWord {
}
@property(retain) id target;	// G=0x349944bd; S=0x349944d9; converted property
@property(retain, nonatomic) NSNumber *timestamp;	// @dynamic
+ (id)predicateFilteringForSearchText:(id)searchText;	// 0x34994489
+ (id)predicateMatchingTarget:(id)target shortcut:(id)shortcut;	// 0x34994451
+ (id)sortDescriptors;	// 0x34994389
- (id)changeDescriptionKey:(id)key;	// 0x34994651
- (int)compareTimestamps:(id)timestamps;	// 0x34994585
- (BOOL)hasChangesToTargetOrShortcut;	// 0x349945f5
// converted property setter: - (void)setTarget:(id)target;	// 0x349944d9
// converted property getter: - (id)target;	// 0x349944bd
- (void)updateTimestamp;	// 0x34994541
@end

