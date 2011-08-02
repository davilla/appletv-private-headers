/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface SSDialogButton : NSObject {
@private
	NSDictionary *_actionDictionary;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *URLTarget;	// G=0x3273b44d; 
@property(readonly, assign, nonatomic) id actionParameter;	// G=0x3273b821; 
@property(readonly, assign, nonatomic) NSString *buttonAction;	// G=0x3273b469; 
@property(readonly, assign, nonatomic) NSString *buttonTitle;	// G=0x3273b485; 
- (id)init;	// 0x3273b4b5
- (id)initWithTitle:(id)title actionDictionary:(id)dictionary;	// 0x3273b601
// declared property getter: - (id)URLTarget;	// 0x3273b44d
// declared property getter: - (id)actionParameter;	// 0x3273b821
// declared property getter: - (id)buttonAction;	// 0x3273b469
// declared property getter: - (id)buttonTitle;	// 0x3273b485
- (void)dealloc;	// 0x3273b5a5
- (id)valueForActionProperty:(id)actionProperty;	// 0x3273b411
@end

