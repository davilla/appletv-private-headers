/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSXMLParser : NSObject {
@private
	id _reserved0;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	id _reserved1;	// 12 = 0xc
	id _reserved2;	// 16 = 0x10
	id _reserved3;	// 20 = 0x14
}
@property(assign) id delegate;	// G=0x320aaf4d; S=0x320aaf5d; converted property
@property(assign) BOOL shouldContinueAfterFatalError;	// G=0x320ab119; S=0x320ab0c9; converted property
@property(assign) BOOL shouldProcessNamespaces;	// G=0x320ab05d; S=0x320aaf6d; converted property
@property(assign) BOOL shouldReportNamespacePrefixes;	// G=0x320ab081; S=0x320aafbd; converted property
@property(assign) BOOL shouldResolveExternalEntities;	// G=0x320ab0a5; S=0x320ab00d; converted property
- (id)initForIncrementalParsing;	// 0x320aae81
- (id)initWithContentsOfURL:(id)url;	// 0x320aab85
- (id)initWithData:(id)data;	// 0x320aaced
- (id)initWithStream:(id)stream;	// 0x320aaed9
- (id)_info;	// 0x320aab75
- (void)_initializeSAX2Callbacks;	// 0x320ac019
- (xmlParserCtxt *)_parserContext;	// 0x320abccd
- (void)_popNamespaces;	// 0x320abe99
- (void)_pushNamespaces:(id)namespaces;	// 0x320abced
- (void)_setParserError:(int)error;	// 0x320abc41
- (void)abortParsing;	// 0x320ab9a5
- (int)columnNumber;	// 0x320aba65
- (void)dealloc;	// 0x320aba95
// converted property getter: - (id)delegate;	// 0x320aaf4d
- (void)finalize;	// 0x320abbdd
- (int)lineNumber;	// 0x320aba35
- (BOOL)parse;	// 0x320ab771
- (BOOL)parseData:(id)data;	// 0x320ab13d
- (BOOL)parseFromStream;	// 0x320ab665
- (id)parserError;	// 0x320ab9e9
- (id)publicID;	// 0x320aba2d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x320aaf5d
// converted property setter: - (void)setShouldContinueAfterFatalError:(BOOL)continueAfterFatalError;	// 0x320ab0c9
// converted property setter: - (void)setShouldProcessNamespaces:(BOOL)processNamespaces;	// 0x320aaf6d
// converted property setter: - (void)setShouldReportNamespacePrefixes:(BOOL)reportNamespacePrefixes;	// 0x320aafbd
// converted property setter: - (void)setShouldResolveExternalEntities:(BOOL)resolveExternalEntities;	// 0x320ab00d
// converted property getter: - (BOOL)shouldContinueAfterFatalError;	// 0x320ab119
// converted property getter: - (BOOL)shouldProcessNamespaces;	// 0x320ab05d
// converted property getter: - (BOOL)shouldReportNamespacePrefixes;	// 0x320ab081
// converted property getter: - (BOOL)shouldResolveExternalEntities;	// 0x320ab0a5
- (id)systemID;	// 0x320aba31
@end

