//
//  LLTool.h
//
//  Copyright (c) 2018 LLDebugTool Software Foundation (https://github.com/HDB-Li/LLDebugTool)
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Work as tool.
 */
@interface LLTool : NSObject

/**
 Identity to model. Deal with the same date, start at 1.
 */
+ (NSString *)absolutelyIdentity;

/**
 The only dateformatter for [LLConfig dateFormatter].
 */
+ (NSString *)stringFromDate:(NSDate *)date;
+ (NSDate *_Nullable)dateFromString:(NSString *)string;

/**
 The only dateformatter for "yyyy-MM-dd".
 */
+ (NSString *)dayStringFromDate:(NSDate *)date;
+ (NSData *_Nullable)dayDateFromString:(NSString *)string;

/**
 The only dateformatter for "yyyy-MM-dd HH:mm:ss".
 */
+ (NSString *)staticStringFromDate:(NSDate *)date;
+ (NSDate *_Nullable)staticDateFromString:(NSString *)string;

/**
 Create directory if not exist.
 */
+ (BOOL)createDirectoryAtPath:(NSString *)path;

/**
 Get rect from two point
 */
+ (CGRect)rectWithPoint:(CGPoint)point otherPoint:(CGPoint)otherPoint;

/**
 Show toast.
 */
+ (void)toastMessage:(NSString *_Nullable)message;

/**
 Show or hide loading message.
 */
+ (void)loadingMessage:(NSString *_Nullable)message;
+ (void)hideLoadingMessage;

/**
 Frame fromat.
 */
+ (NSString *)stringFromFrame:(CGRect)frame;

/**
 Random color from object.
 */
+ (UIColor *)colorFromObject:(NSObject *)object;

/**
 Supported interface orientations in info.plist.
 */
+ (UIInterfaceOrientationMask)infoPlistSupportedInterfaceOrientationsMask;

/**
 Format number.

 @param number Number
 @return String
 */
+ (NSString *)formatNumber:(NSNumber *)number;

@end

NS_ASSUME_NONNULL_END
