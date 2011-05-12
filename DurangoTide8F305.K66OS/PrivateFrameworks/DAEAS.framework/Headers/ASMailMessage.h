/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAMailMessage.h> // Unknown library

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {
	ASEmailItem *_ASEmailItem;	// 4 = 0x4
}
- (id)initWithASEmailItem:(id)asemailItem;	// 0x3032c015
- (id)initWithCoder:(id)coder;	// 0x3032bed1
- (id)attachments;	// 0x3032bccd
- (id)body;	// 0x3032bd8d
- (int)bodySize;	// 0x3032bd31
- (int)bodyTruncated;	// 0x3032bd0d
- (id)cc;	// 0x3032be91
- (id)conversationId;	// 0x3032bc4d
- (id)conversationIndex;	// 0x3032bc2d
- (id)date;	// 0x3032be31
- (void)dealloc;	// 0x3032c065
- (id)description;	// 0x3032c0ad
- (id)displayTo;	// 0x3032bdf1
- (void)encodeWithCoder:(id)coder;	// 0x3032bab1
- (id)folderID;	// 0x3032bbcd
- (id)from;	// 0x3032be71
- (int)importance;	// 0x3032bdd1
- (int)lastVerb;	// 0x3032bbad
- (id)longID;	// 0x3032bbed
- (id)meetingRequestMetaData;	// 0x3032bc8d
- (id)meetingRequestUUID;	// 0x3032bcad
- (id)messageClass;	// 0x3032bced
- (BOOL)read;	// 0x3032bdad
- (BOOL)readIsSet;	// 0x3032bb89
- (id)remoteID;	// 0x3032bc0d
- (id)replyTo;	// 0x3032be51
- (id)rfc822Data;	// 0x3032bfb9
- (id)subject;	// 0x3032be11
- (id)threadTopic;	// 0x3032bc6d
- (id)to;	// 0x3032beb1
- (BOOL)verbIsSet;	// 0x3032bb65
@end

