//
//  ToDoItem.h
//  ToDoList
//
//  Created by Zhuang Niu on 1/19/15.
//  Copyright (c) 2015 Zhuang Niu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
