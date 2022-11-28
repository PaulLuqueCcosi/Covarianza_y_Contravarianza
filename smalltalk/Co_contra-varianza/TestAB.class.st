Class {
	#name : #TestAB,
	#superclass : #TestCase,
	#category : #'Co_contra-varianza'
}

{ #category : #tests }
TestAB >> testAB [
	|obj1 obj2|
	
	obj1 := A new.
	obj2 := B new.
	
	self assert: (obj1 metodoInA) equals: 'metodo en A'.
	self assert: (obj2 metodoInA) equals: 'metodo A en B'.
]

{ #category : #tests }
TestAB >> testAB: obj [
	self assert: (obj metodoInA) equals: 'metodo en A'.
]
