/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library

@class NSNotification;

@interface NSInterThreadMessage : NSObject {
	int type;	// 4 = 0x4
	union {
		NSNotification *notification;
		struct {
			SEL selector;
			id receiver;
			id arg1;
			id arg2;
		} sel;
	} data;	// 8 = 0x8
}
@end

