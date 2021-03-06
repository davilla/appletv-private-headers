/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class Message;

@interface MessageBody : NSObject {
	Message *_message;	// 4 = 0x4
}
@property(retain) Message *message;	// G=0x30c485a5; S=0x30c4863d; converted property
- (id)attachments;	// 0x30c48701
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x30c485dd
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x30c48599
- (void)dealloc;	// 0x30c48725
- (id)htmlContent;	// 0x30c48625
- (id)htmlContentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x30c48601
- (BOOL)isHTML;	// 0x30c4859d
- (BOOL)isRich;	// 0x30c485a1
// converted property getter: - (id)message;	// 0x30c485a5
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x30c485b5
- (id)rawData;	// 0x30c485bd
// converted property setter: - (void)setMessage:(id)message;	// 0x30c4863d
- (id)textHtmlPart;	// 0x30c485b9
@end

