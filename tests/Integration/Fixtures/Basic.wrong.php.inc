<?php

class Basic
{
    const FOO = 'foo'; // ClassAttributesSeparationFixer
    function isEqual($a, $b) // VisibilityRequiredFixer
    {
        // TrimArraySpacesFixer
        $fooBar = [ 'a', 'b'];
        // MbStrFunctionsFixer
        $bazLength = strlen('baz');
        // LambdaNotUsedImportFixer
        $lambdaWithUnusedImport = function () use ($fooBar) { return 'foo'; };
        // NoUselessSprintfFixer
        $uselessSprintf = sprintf('bar');
        // StrictParamFixer
        $useStrictParam = in_array(1337, $fooBar);
        // SingleSpaceAfterConstructFixer, StrictComparisonFixer
        if ($a == $b || $bazLength != 3) { return  true; }
        return false; // BlankLineBeforeStatementFixer
    }

    public function fooBar(mixed $foo): mixed
    {
        // PhpdocToCommentFixer
        /**
         * Phpdoc used instead of plain comment
         */
        if ($foo === 'bar') {
            // NoAliasFunctionsFixer
            $baz = join(',', ['foo', 'bar']);
        }

        // TernaryToElvisOperatorFixer
        return ($foo ? $foo : 'not true');
    }
}